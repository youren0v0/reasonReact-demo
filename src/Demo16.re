
type action =
  | Tick;

type state = {
  count: int
};

let component = ReasonReact.reducerComponent("Demo16");

let make = (~name,_children) => {
  ...component,
  initialState: () => {count: 0},
  reducer: (action, state) =>
    switch action {
    | Tick => ReasonReact.Update({...state, count: state.count + 1})
    },
  willReceiveProps: (self) => {...self.state, count: 99},
  didUpdate: ({oldSelf, newSelf}) =>Js.log("didUpdate:oldSelf:" ++ string_of_int(oldSelf.state.count) ++ "newSelf:" ++ string_of_int(newSelf.state.count)),
  willUpdate: ({oldSelf, newSelf}) =>Js.log("willUpdate:oldSelf:" ++ string_of_int(oldSelf.state.count) ++ "newSelf:" ++ string_of_int(newSelf.state.count)),
  willUnmount: (self) =>Js.log("willUnmount:"),
  render: (self) => <div onClick={self.reduce((evt) => Tick)}> (ReasonReact.stringToElement(string_of_int(self.state.count))) </div>
};
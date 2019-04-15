
type action =
  | Tick;

type state = {
  count: int
};

let component = ReasonReact.reducerComponent("Demo12");

let make = (~name,_children) => {
  ...component,
  initialState: () => {count: 0},
  reducer: (action, state) =>
    switch action {
    | Tick => ReasonReact.Update({...state, count: state.count + 1})
    },
  willReceiveProps: (self) => {...self.state, count: 99},
  render: (self) => <div onClick={self.reduce((evt) => Tick)}> (ReasonReact.stringToElement(string_of_int(self.state.count))) </div>
};
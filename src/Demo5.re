type state = {
  value: int,
  show: bool,
  myArr: array(int),
  name: string
};

let component = ReasonReact.reducerComponent("Demo5");

let make = (children) => ({
  ...component,
  initialState: () => {
    value: 0,
    show: false,
    myArr: [|1|],
    name: "name"
  },
  reducer: ((), state) => ReasonReact.NoUpdate,
  render: (self) =>
    <div>
      <div>(ReasonReact.stringToElement(string_of_int(self.state.value)))</div>
    </div>
});

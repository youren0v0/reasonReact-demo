type state = {
  value: int
};

let component = ReasonReact.reducerComponent("Demo6");

let make = (~name="1" ,children) => ({
  ...component,
  initialState: () => {
    value: 0
  },
  reducer: ((), state) => ReasonReact.NoUpdate,
  render: (self) =>
    <div>
      <div>
      (
        self.state.value !== 0 ? ReasonReact.stringToElement(string_of_int(self.state.value)) : ReasonReact.stringToElement("name")
      )
      </div>
    </div>
});
/* 我们可以根据state来做一些简单的dom操作，但是现在state还不是动态的接下来我们添加上action */
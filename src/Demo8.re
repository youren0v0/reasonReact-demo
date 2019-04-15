type state = {
  show: bool
};
/* 枚举 */
type action =
  | Click;

let component = ReasonReact.reducerComponent("Demo8");

let make = (children) => ({
  ...component,
  initialState: () => {
    show: false
  },
  reducer: (action, state) => {
    switch action {
    | Click => ReasonReact.SideEffects((self) => Js.log("hello!"))
    };
  },
  render: (self) =>
    <div>
      /* last one */
      <button onClick={self.reduce((evt) => Click)}>(ReasonReact.stringToElement("show span"))</button>
      
      <span>(self.state.show ? ReasonReact.stringToElement("span") : ReasonReact.stringToElement(""))</span>
     
    </div>
});


/* let component = ReasonReact.statelessComponent("Demo7");

let make = (children) => ({
  ...component,

  render: (self) =>
    <div>
      <Demo1/>
      <Demo2 name="John"/>
    </div>
}); */


type state = {
  value: int,
  show: bool
};
type action =
  | Click;

let component = ReasonReact.reducerComponent("Demo01");

let make = (children) => ({
  ...component,
  initialState: () => {
    value: 0,
    show: false
  },
  reducer: (action, state) => {
    switch action {
    | Click => ReasonReact.Update({value: 66, show: !state.show})
    };
  },
  render: (self) =>
    <div>
      <button onClick={self.reduce((evt) => Click)}>(ReasonReact.stringToElement("change value"))</button>
      
     
      (
        self.state.show ? <Demo16 name={string_of_int(self.state.value)}/> : <div>(ReasonReact.stringToElement("_null"))</div>
      )
    </div>
});
  /* <Demo12 name={string_of_int(self.state.value)}/>
      <Demo13 name={string_of_int(self.state.value)}/>
      <Demo14 name={string_of_int(self.state.value)}/> 
      <Demo15 name={string_of_int(self.state.value)}/>*/
      /* <Demo1/>
      <Demo2 name="John"/>
       <div>(ReasonReact.stringToElement(string_of_int(self.state.value)))</div>
      (
        self.state.show ? <Demo16 name={string_of_int(self.state.value)}/> : <div>(ReasonReact.stringToElement("_null"))</div>
      )
      */
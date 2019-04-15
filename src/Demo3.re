let component = ReasonReact.statelessComponent("Demo3");
let myStyle = ReactDOMRe.Style.make(~color="red", ~fontSize="68px", ());
let make = (~name: string = "demo3", child) => {
  ...component,
  render: (self) =>
    <div >
      <div className="app">(ReasonReact.stringToElement(name))</div>
      <div style=(
        ReactDOMRe.Style.make(~color="#444444", ~fontSize="68px", ())
      )>(ReasonReact.stringToElement(name))</div>
      <div style=(
        ReactDOMRe.Style.unsafeAddProp(myStyle, "width", "10px")
      )>(ReasonReact.stringToElement(name))</div>
    </div>
};
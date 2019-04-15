
/* 

let make = (~name, ~other: int, child) => {
  ...component,
  render: (self) =>
    <div >
      <div className="title">
        (ReasonReact.stringToElement("name:" ++ name ++ string_of_int(other)))
      </div>
    </div>
}; */
let component = ReasonReact.statelessComponent("Demo2");
let make = (~name: string, ~other: int, [child1, child2]) => {
  ...component,
  render: (self) =>
    <div className="app">
      <div className="title">
        (ReasonReact.stringToElement("What to do" ++ name))
      </div>
      <div className="items">
        (ReasonReact.stringToElement(string_of_int(other)))
      </div>
      <div>(ReasonReact.stringToElement(string_of_int(child1)))</div>
      <div>(ReasonReact.stringToElement(string_of_int(child2)))</div>
    </div>
};

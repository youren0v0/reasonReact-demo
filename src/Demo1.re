let component = ReasonReact.statelessComponent("Demo1");

let make = (_) => ({
  ...component,
  render: (self) =>
    <div>
      <div>(ReasonReact.stringToElement("Hello World"))</div>
    </div>
});
/* self 类似于 this */
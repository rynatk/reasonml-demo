let component = ReasonReact.statelessComponent("Page");

let handleClick = (_event, _self) => 5;

let make = (~message, _children) => {
  ...component,
  render: self => (
    <div onClick=(self.handle(handleClick))>
      (ReasonReact.string(message))
    </div>
  ),
};

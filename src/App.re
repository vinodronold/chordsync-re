[%bs.raw {|require('./styles/App.css')|}];

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: _self =>
    <div className="mdc-typography">
        (ReasonReact.string(message))
    </div>,
};

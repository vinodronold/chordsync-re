[@bs.module "./registerServiceWorker"]
external register_service_worker : unit => unit = "default";

ReactDOMRe.renderToElementWithId(
  <App message="chordsync" />,
  "root",
);

register_service_worker();

import React from "react";
import ReactDom from "react-dom";
import Redux from "react-redux";
import "./index.css";

const App = () => {
	return (
		<div className="App">
			<p>a</p>
		</div>
	);
};

ReactDom.render(
	<React.StrictMode>
		<App />
	</React.StrictMode>,
	document.getElementById("root")
);

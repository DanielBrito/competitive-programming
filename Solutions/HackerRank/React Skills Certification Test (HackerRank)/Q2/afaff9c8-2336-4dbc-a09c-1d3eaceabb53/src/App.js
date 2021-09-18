import React, { useState } from "react";
import "./App.css";
import "h8k-components";

import Articles from "./components/Articles";

const title = "Sorting Articles";

const sortUpvotesDesc = (list) => {
  return [...list].sort((a, b) => {
    return b.upvotes - a.upvotes;
  });
};

const sortDateDesc = (list) => {
  return [...list].sort((a, b) => {
    return b.date - a.date;
  });
};

function App({ articles }) {
  const [sorted, setSorted] = useState(sortUpvotesDesc(articles));

  return (
    <div className="App">
      <h8k-navbar header={title}></h8k-navbar>
      <div className="layout-row align-items-center justify-content-center my-20 navigation">
        <label className="form-hint mb-0 text-uppercase font-weight-light">
          Sort By
        </label>
        <button
          data-testid="most-upvoted-link"
          className="small"
          onClick={() => setSorted(sortUpvotesDesc(articles))}
        >
          Most Upvoted
        </button>
        <button
          data-testid="most-recent-link"
          className="small"
          onClick={() => setSorted(sortDateDesc(articles))}
        >
          Most Recent
        </button>
      </div>
      <Articles articles={sorted} />
    </div>
  );
}

export default App;

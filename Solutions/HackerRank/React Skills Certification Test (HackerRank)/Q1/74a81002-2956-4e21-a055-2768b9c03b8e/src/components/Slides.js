import React, { useState } from "react";

function Slides({ slides }) {
  const [slideId, setSlideId] = useState(0);

  return (
    <div>
      <div id="navigation" className="text-center">
        <button
          disabled={slideId === 0 ? true : false}
          data-testid="button-restart"
          className="small outlined"
          onClick={() => setSlideId(0)}
        >
          Restart
        </button>
        <button
          disabled={slideId === 0 ? true : false}
          data-testid="button-prev"
          className="small"
          onClick={() => setSlideId(slideId - 1)}
        >
          Prev
        </button>
        <button
          disabled={slideId === slides.length - 1 ? true : false}
          data-testid="button-next"
          className="small"
          onClick={() => setSlideId(slideId + 1)}
        >
          Next
        </button>
      </div>
      <div id="slide" className="card text-center">
        <h1 data-testid="title">{slides[slideId].title}</h1>
        <p data-testid="text">{slides[slideId].text}</p>
      </div>
    </div>
  );
}

export default Slides;

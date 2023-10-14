const btnEl = document.getElementById("btn");
const QuoteEl = document.getElementById("quote");
const authorEl = document.getElementById("author");

async function getQuote() {
  try {
    //
    btnEl.innerHTML = "Loading";
    btnEl.disabled = true;
    btnEl.style.cursor = "not-allowed";

    const response = await fetch("https://api.quotable.io/random");
    const quote = await response.json();

    QuoteEl.innerText = quote.content;
    authorEl.innerText = `~${quote.author}`;
    //
    btnEl.innerHTML = "Get a Quote";
    btnEl.disabled = false;
    btnEl.style.cursor = "pointer";
  } catch (error) {
    console.error;
  }
}

btnEl.addEventListener("click", getQuote);

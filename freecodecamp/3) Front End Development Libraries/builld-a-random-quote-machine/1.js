const url =
	"https://gist.githubusercontent.com/camperbot/5a022b72e96c4c9585c32bf6a75f62d9/raw/e3c6895ce42069f0ee7e991229064f167fe8ccdc/quotes.json";

const tweetQuoteBtn = document.getElementById("tweet-quote");
const newQuoteBtn = document.getElementById("new-quote");

let quotes = [];

const request = async () => {
	const response = await fetch(url);
	const data = await response.json();
	return data;
};

const getRandomNumber = (max) => {
    return parseInt(Math.floor(Math.random() * max));
}

const getQuote = () => {
    request().then(val => {
        const quote = val.quotes[getRandomNumber(102)];
        document.getElementById('text').innerHTML = quote.quote;
        document.getElementById('author').innerText = ` - ${quote.author}`;
    });
};

newQuoteBtn.addEventListener("click", getQuote);

const current_quote = document.getElementById('text').textContent;
const current_author = document.getElementById('author').textContent;
tweetQuoteBtn.href =
	"https://twitter.com/intent/tweet?hashtags=quotes&related=freecodecamp&text=" +
	encodeURIComponent('" ' + current_quote + '" ' + current_author);

// const tweetQuote = () => {
    // window.open(
        // // 'https://twitter.com/intent/tweet?hashtags=quotes&related=freecodecamp&text=' + encodeURIComponent('" ' + current_quote + '" ' + current_author)
	// );
// };
// tweetQuoteBtn.addEventListener("click", tweetQuote);
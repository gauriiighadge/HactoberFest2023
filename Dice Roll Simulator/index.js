const buttonEl = document.getElementById("roll-button");
const diceEl = document.getElementById("dice");
const rollHistoryEl = document.getElementById("roll-history");

function getDiceFace(rollResult) {
  switch (rollResult) {
    case 1:
      return "&#9856";
    case 2:
      return "&#9857";
    case 3:
      return "&#9858";
    case 4:
      return "&#9859";
    case 5:
      return "&#9860";
    case 6:
      return "&#9861";
    default:
      return "";
  }
}

let historyList = [];

// 2 Function

function rollDice() {
  // Get Random Number
  const rollResult = Math.floor(Math.random() * 6) + 1;

  // GetFace UiniCode Based On Random Number
  const diceFace = getDiceFace(rollResult);

  // set innerhtml
  diceEl.innerHTML = diceFace;

  // Array of roll Result [2,6...] so on...
  historyList.push(rollResult);

  // Update List Accordingly
  updateRollHistory();
}

// Function 4

function updateRollHistory() {
  // Empty list
  rollHistoryEl.innerHTML = "";

  // Run loop for history list update

  for (let i = 0; i < historyList.length; i++) {
    // list item <li>
    const listitem = document.createElement("li");

    listitem.innerHTML = `Roll ${i + 1} : <span>${getDiceFace(
      historyList[i]
    )}</span> `;

    rollHistoryEl.appendChild(listitem);
  }
}

// Master Function

buttonEl.addEventListener("click", () => {
  // Add Animation
  diceEl.classList.add("roll-animation");

  // Reomove Animation After 1s and run Function() => rollDice
  setTimeout(() => {
    diceEl.classList.remove("roll-animation");

    // RollDice Functionlity
    rollDice();
  }, 1000);
});

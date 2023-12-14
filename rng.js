function randomInteger(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}

function randomNumberGenerator(minValue, maxValue, count) {
    let numbers = [];
    for (let i = 0; i < count; i++) {
        numbers.push(randomInteger(minValue, maxValue));
    }
    return numbers;
}

// 使用範例
const minValue = 1;
const maxValue = 100;
const count = 5;

const randomNumbers = randomNumberGenerator(minValue, maxValue, count);
console.log(randomNumbers);

function arrayToFrequencyObject(arr) {
    const frequencyObject = {};
  
    for (const num of arr) {
      frequencyObject[num] = (frequencyObject[num] || 0) + 1;
    }
  
    return frequencyObject;
  }
  
  // Example usage:
  const numbersArray = [1, 2, 3, 1, 2, 4, 5, 1];
  const resultObject = arrayToFrequencyObject(numbersArray);
  console.log(resultObject);
  
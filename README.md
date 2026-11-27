# University GPA Calculator

**Live link:** https://abdul-se-rehman.github.io/university-gpa-calculator/

A responsive web app that calculates GPA from the coursework completed so far.

## Features
- Works with partial marks: empty boxes are ignored, so the percentage uses only completed work
- Converts each subject's percentage to grade points using a university grading scale
- Weights subjects by credit hours to give an overall GPA
- Caps each box at its maximum marks
- Responsive layout for phone, tablet and laptop

## How it works
1. Marks obtained and marks possible are added for each filled box
2. Percentage = obtained / possible x 100
3. Percentage is converted to grade points
4. GPA = sum(grade points x credit hours) / sum(credit hours)

## Built with
HTML, CSS, JavaScript, Git, GitHub Pages

## Run locally
Download the files and open `index.html` in a browser.

## Notes
The grading scale and credit hours are set for my own courses. To change them, edit `gradePoint()` and the credit hours in the script.

## What I learned
Structuring a page with HTML, styling it with CSS, reading input and doing calculations in JavaScript, publishing with GitHub Pages and also C++ is used in Backend logic.

## Author
Abdul Rehman - [GitHub](https://github.com/Abdul-Se-Rehman) | [LinkedIn](https://www.linkedin.com/in/abdul-rehman-3ab21b322/)

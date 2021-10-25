
# Begin your journey with Linux and Git

---

> I learnt a bunch of thing in this task about how `cp` and `mv` work and about the how we use `>` to destroy previous content and `>>` to append file👌👌

## Step wise detailed terminal commands:
### STEP-1
* mkdir Coordinates-Location
* cd Coordinates-Location
### STEP-2
* mkdir North
* cd North
* touch NDegree.txt
* echo "9°">>NDegree.txt
* touch NMinutes.txt
* echo "5'">>NMinutes.txt
* touch NSeconds.txt
* echo "38.1">>NSeconds.txt
* cat NDegree.txt NMinutes.txt NSeconds.txt > NorthCoordinate.txt
* cp NorthCoordinate.txt /Users/pranavkrishnan/coordinates-Location
* cd ..
* mv NorthCoordinate.txt North.txt
* cd North 
* rm NorthCoordinate.txt
### STEP-3
* cd ..
### STEP-4 
by this point I realised that we don't need to seperately make a file and use the echo command just directly echoing the text make a new file all by itself.

* mkdir East
* cd East/
* echo "76°">>EDegree.txt
* echo "29'">>EMinutes.txt
* echo "30.8\"">>ESeconds.txt
* cat EDegree.txt EMinutes.txt ESeconds.txt >EastCoordinate.txt
* cp EastCoordinate.txt /Users/pranavkrishnan/Coordinates-Location/
* cd ..
* mv EastCoordinate.txt East.txt
* cd East/
* rm EastCoordinate.txt
### STEP-5
* cat North.txt East.txt > Location-Coordinate.txt
### STEP-6
* CONVERTION STEP(DONE MANUALLY)
### STEP-7
* Found the location :smiling_cat:
### STEP-8
* CREATED FILE SOLUTION.md 
---
 ## Steps used for pushing to git repo
 * git status [for checking if staged]
* git add Coordinates-Location [for staging the file]
* git commit -m "message" [for commiting a file]
* git push origin main [pushing the directory to github repository]





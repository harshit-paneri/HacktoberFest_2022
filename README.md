<img src="image/Hfest.png">

</br>

# Hacktober Fest 2022
👋🏻 If you're new to Git and GitHub or are looking to get started with open source development, this repository is for you! I want to help you learn about these technologies and participate in Hacktoberfest, so I've collected some resources to get you started.

By chance if you haven't registered for HacktoberFest, register here **[Hacktober Fest 2022](https://hacktoberfest.com/)**

> ⭐ **Star this repository** to not lose it!

## **Learning Resources**

- [Git & GitHub](https://www.youtube.com/watch?v=apGV9Kg7ics) by Kunal Kushwaha
- Learning [Markdown](https://www.youtube.com/watch?v=OXZ77HvL_Yg) in 15 minutes from Eddie Jaoude
- [Git Cheat Sheet](https://training.github.com/downloads/github-git-cheat-sheet.pdf) from Github
- [ProGit](https://github.com/harshit-paneri/HacktoberFest_2022/blob/main/resources/progit.pdf)- A book written by Scott Chacon and Ben Straub.

## RESOURCES FOR BEGINNERS

### Getting started with Open-Source

Take your time and go through some of these articles to get an idea of what is open source.
* DigitalOcean : [INTRODUCTION TO GITHUB AND OPEN-SOURCE PROJECTS](https://www.digitalocean.com/community/tutorial_series/an-introduction-to-open-source)
* GitHub : [HOW TO CONTRIBUTE TO OPEN SOURCE](https://opensource.guide/how-to-contribute/)
* DigitalOcean: [WHAT IS OPEN SOURCE](https://www.digitalocean.com/community/tutorials/what-is-open-source)
* DigitalOcean : [HOW TO USE GIT](https://www.digitalocean.com/community/cheatsheets/how-to-use-git-a-reference-guide)

### **Some beginner friendly Repostory**

To help you get started with contributing, check them out!

||
|:-|
|1. [This repository](https://github.com/harshit-paneri/HacktoberFest_2022)
|2. [Canvas Game](https://github.com/harshit-paneri/canvas-game)|
|3. [Basic Website with HTML and CSS only](https://github.com/Naman-sharma00100/Basic_website_HTML_CSS_only)|
|4. [Web Location](https://github.com/harshit-paneri/Web-Location)|

> For contributing in this repository, check the file `Contributor-list` folder.

## Getting Started 🤩🤗

1. Fork this [repository](https://github.com/harshit-paneri/HacktoberFest_2022/fork).
2. Clone on the repository to your local machine

    ```
    git clone <git repo>
    ```

3. Navigate to cloned repository.
    ```
    cd filename
    ```

4. Create a new branch to work on with
    ```markdown
    git checkout -b my-new-branch
    ```

    >  Time to make some changes to the cloned repository on your local machine.

5. Add your work with
    ```
    git add .
    ```

6. Save your work, by commiting it.
    ```markdown
    git commit -m "first commit"
    ```

7. Let's try pushing it on remote repository, in our case github!
    ```
    git push origin my-new-branch
    ```

8. Ready to share your work with others? So let's generate a Pull Request!
    To do this, go to your forked github repository and `Create a Pull Request`.

<br>

### Avoid Conflicts (Syncing the fork)

An easy way to avoid conflicts is to add an `upstream` for your git repo, as other PR's may be merged while you're working on your branch/fork.

```
git remote add upstream <git repo>
```

Verify that the new remote was been added by
```
git remote -v
```

To pull new changes from the parent repository, just do

```
git merge upstream/master
```

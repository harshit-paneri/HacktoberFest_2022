<img src="image/Hfest.png">

# Hacktober Fest 2022
👋🏻 If you're new to Git and GitHub or are looking to get started with open source development, this repository is for you! I want to help you learn about these technologies and participate in Hacktoberfest, so I've collected some resources to get you started.

By chance if you haven't registered for HacktoberFest, register here **[Hacktober Fest 2022](https://hacktoberfest.com/)**.

> For contributing in this repository, check the file `Contributors.md`.

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

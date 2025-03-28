# Learning about Git and GitHub.

### Scheduled Git backups using cron

1. Use 'sudo crontab -e' to access the cron jobs file using an editor.
2. Add the commands git add and git commit. '0 0 * * 1' equates to 12AM each Monday.
```shell
0 0 * * 1 git commit -m  "testing command substitution in git commit: date +$(date +"%D %T")"
```
3. Save your changes and exit the editor!
---
Just some random Markdown tests:

```javascript
console.log('I can write JS here.');
```

```cpp
std::cout << "Hello World";
```

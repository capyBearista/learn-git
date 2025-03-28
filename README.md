# Learning about Git and GitHub.

### Scheduled Git backups using cron

1. Use 'sudo crontab -e' to access the cron jobs file.
2. Add the commands git add and git commit.
```
* * * * * git add .
* * * * * git commit -m "$(date +"%D %T")"
```


Just some random Markdown tests:

```javascript
console.log('I can write JS here.');
```

```cpp
std::cout << "Hello World";
```

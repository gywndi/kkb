# gather_slow_log

gather_slow_log - perl
 
How to use:
<pre><code>$ gather_slow_log --slow-log=/data/mysql/mysql-slow.log</code></pre>

Cron Job:
<pre><code>*/10 * * * * mysql /usr/programs/script/gather_slow_log --slow-log=/data/mysql/mysql-slow.log >> /usr/programs/script/gather_slow_log.log 2>&1</code></pre>

Maybe.. it works well.. :-)
Good luck!

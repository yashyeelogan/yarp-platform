function offset = lmpkgLag(sig0, sig1)

[c lag] = xcorr(sig0, sig1);
[ignore winner] = max(c);
offset = lag(winner);

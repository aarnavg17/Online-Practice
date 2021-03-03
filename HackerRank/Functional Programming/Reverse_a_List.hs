rev [] = []
rev l = rev ( tail l ) ++ [head l]
ssq :: int -> int
ssq 1 = 1
ssq n = n * n + ssq (n - 1)

hypo :: Float -> Float -> Float
hypo a b = sqrt ((a * a) + (b * b))

backwards :: [a] -> [a]
backwards = reverse

-- mapping 
map sqrt [1..5]

-- folding
foldr1 (+) [1..5]
sum [1..5]

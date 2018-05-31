module BuscaNaInternet where

-- https://www.t-obi.com/problem/show/1/1

access :: Int -> Int
access n = f (f n) where
           f n = n * 2

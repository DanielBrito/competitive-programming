module BuscaNaInternet where

access :: Int -> Int
access n = f (f n) where
           f n = n * 2
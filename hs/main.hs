module Main (main) where

data Pizza = Pizza {time :: Int, state :: String} deriving (Show)

prepareDough :: Pizza -> Pizza
prepareDough pizza = pizza {time = 1, state = "Prepared dough"}

addSauce :: Pizza -> Pizza
addSauce pizza = pizza {time = 2, state = "Added sauce"}

addToppings :: Pizza -> Pizza
addToppings pizza = pizza {time = 3, state = "Added toppings"}

bake :: Pizza -> Pizza
bake pizza = pizza {time = 4, state = "Baked the hell out of this"}

bakeMeBaby :: Pizza -> IO ()
bakeMeBaby pizza = do
  let pizza1 = prepareDough pizza
  print pizza1
  let pizza2 = addSauce pizza1
  print pizza2
  let pizza3 = addToppings pizza2
  print pizza3
  let pizza4 = bake pizza3
  print pizza4

main :: IO ()
main = do
  let pizza = Pizza 0 "Raw"
  bakeMeBaby pizza

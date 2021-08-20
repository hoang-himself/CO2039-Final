module Main (main) where

data Pastry = Pizza {time :: Int, state :: String} deriving (Show)

prepareDough :: Pastry -> Pastry
prepareDough pizza@(Pizza t _)
  | t /= 0 = pizza
  | otherwise = pizza {time = 1, state = "Prepared dough"}

addSauce :: Pastry -> Pastry
addSauce pizza@(Pizza t _)
  | t /= 1 = pizza
  | otherwise = pizza {time = 2, state = "Added sauce"}

addToppings :: Pastry -> Pastry
addToppings pizza@(Pizza t _)
  | t /= 2 = pizza
  | otherwise = pizza {time = 3, state = "Added toppings"}

bake :: Pastry -> Pastry
bake pizza@(Pizza t _)
  | t /= 3 = pizza
  | otherwise = pizza {time = 4, state = "Baked the hell out of this"}

bakeMeBaby :: Pastry -> IO ()
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

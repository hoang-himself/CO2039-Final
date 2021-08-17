helloPerson :: String -> String
helloPerson name = "Hello, " ++ name ++ "!"

main :: IO()
main = do
  print "Hello! What's your name?"
  name <- getLine
  let statement = helloPerson name
  print statement

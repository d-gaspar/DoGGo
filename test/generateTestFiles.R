set.seed(42)
df = data.frame(
  id = 1:50,
  pow2 = (1:50)^2,
  pow2_mod10 = (1:50)^2 %% 10,
  sqrt2 = sqrt(1:50),
  color = sample(x = c("red", "green", "blue"), size = 50, replace = TRUE)
)
write.table(x = df, "colors.tsv", sep = "\t", quote = FALSE, row.names = FALSE)

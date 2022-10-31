[TestCaseSource(nameof(SourceProvider))]
public void WhenDivideTwoNumbers_ThenReturnDivisionOfTwoNumbersProvidedBySource(int a, int b, double expected)
{
    // Arrange
    var calculator = new Calculator();
    // Act
    var actual = calculator.Divide(a, b);
    // Assert
    Assert.AreEqual(expected, actual);
}
public static IEnumerable<int[]> SourceProvider()
{
    yield return new int[] { 300, 100, 3 };
    yield return new int[] { 400, 200, 2 };
}

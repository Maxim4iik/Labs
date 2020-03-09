internal static class StringFunctions
{
	public static string ChangeCharacter(string sourceString, int charIndex, char newChar)
	{
		return (charIndex > 0 ? sourceString.Substring(0, charIndex) : "")
			+ newChar.ToString() + (charIndex < sourceString.Length - 1 ? sourceString.Substring(charIndex + 1) : "");
	}

	public static bool IsXDigit(char character)
	{
		if (char.IsDigit(character))
			return true;
		else if ("ABCDEFabcdef".IndexOf(character) > -1)
			return true;
		else
			return false;
	}

	public static string StrChr(string stringToSearch, char charToFind)
	{
		int index = stringToSearch.IndexOf(charToFind);
		if (index > -1)
			return stringToSearch.Substring(index);
		else
			return null;
	}

	public static string StrRChr(string stringToSearch, char charToFind)
	{
		int index = stringToSearch.LastIndexOf(charToFind);
		if (index > -1)
			return stringToSearch.Substring(index);
		else
			return null;
	}

	public static string StrStr(string stringToSearch, string stringToFind)
	{
		int index = stringToSearch.IndexOf(stringToFind);
		if (index > -1)
			return stringToSearch.Substring(index);
		else
			return null;
	}

	private static string activeString;
	private static int activePosition;
	public static string StrTok(string stringToTokenize, string delimiters)
	{
		if (stringToTokenize != null)
		{
			activeString = stringToTokenize;
			activePosition = -1;
		}

		if (activeString == null)
			return null;

		if (activePosition == activeString.Length)
			return null;

		activePosition++;
		while (activePosition < activeString.Length && delimiters.IndexOf(activeString[activePosition]) > -1)
		{
			activePosition++;
		}

		if (activePosition == activeString.Length)
			return null;

		int startingPosition = activePosition;

		do
		{
			activePosition++;
		} while (activePosition < activeString.Length && delimiters.IndexOf(activeString[activePosition]) == -1);

		return activeString.Substring(startingPosition, activePosition - startingPosition);
	}
}
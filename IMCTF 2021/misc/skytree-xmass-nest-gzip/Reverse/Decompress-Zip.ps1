[int]$looplimit = 1000
[string]$password = ""
for ($i = 1; $i -lt $looplimit; $i++) {
    [bool]$isFirst = $i -eq 1
    [string]$passwordFile = "./pass$($isFirst ? $null : $i).txt"
    if (Test-Path $passwordFile) {
        $password += Get-Content "./pass$($isFirst ? $null : $i).txt"
        Invoke-Expression "7z e -y -p$password skytree$($isFirst ? $null : $i).7z"
    }
    else {
        break
    }
}

Write-Host " FINISH " -ForegroundColor Black -BackgroundColor Green
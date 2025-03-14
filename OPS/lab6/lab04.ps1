# lab04.ps1

# Step 1: Create the ops102 directory
New-Item -Path "$HOME\ops102" -ItemType Directory -Force

# Step 2: Create subdirectories a-z
foreach ($letter in 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z') {
    New-Item -Path "$HOME\ops102\$letter" -ItemType Directory
}

# Step 3: Create files named 00-99
foreach ($i in 00..99) {
    New-Item -Path "$HOME\ops102\$filename" -ItemType File
}

# Step 4: Decision tree logic for moving files
Get-ChildItem -Path "$HOME\ops102" -File | ForEach-Object {
    if ($_.Name -like '*0*') {
        Move-Item $_.FullName "$HOME\ops102\a"
    }
    elseif ($_.Name -like '*8*') {
        Move-Item $_.FullName "$HOME\ops102\g"
    }
}

# Step 5: Delete remaining files
Get-ChildItem -Path "$HOME\ops102" -File | Remove-Item

# Step 6: Delete empty subdirectories
Get-ChildItem -Path "$HOME\ops102" -Directory | ForEach-Object {
    if ((Get-ChildItem -Path $_.FullName).Count -eq 0) {
        Remove-Item $_.FullName
    }
}

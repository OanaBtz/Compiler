#!/usr/bin/perl

use strict;
use warnings;
use 5.010;

my $directory = "./LTD";
my @subdirectories = ();
my @headings = ();
my @filenames = ();
my $filecount = 0;
my $flag = "true";
my $nr = 0;

opendir (DIR, $directory) or die $!;

while(my $files = readdir(DIR))
{
    next if ($files =~ m/^\./);

    push(@filenames, $files);
}

#print @filenames;

for(my $i = 0; $i< scalar @filenames; $i++){
    open(my $filehandle, '<', "./LTD/".$filenames[$i]) or die $!;
    my $chars = 0;
    while(my $row = <$filehandle>){
        chomp $row;
        $chars += length($_);
        if(substr($row, 0, 2) ne ".*"){
            $flag = "false";
        }
    }

    if($flag eq "true" && $chars > 0){
        $nr++;
        print($filenames[$i] . "\n");
    }
    $flag = "true";

}

print($nr . "\n");
exit();


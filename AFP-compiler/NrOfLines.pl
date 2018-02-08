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
my $nr_in_file = 0;
my $min = 100000;
my $max = 0;
my $maxfile = "";
my $minfile = "";


opendir (DIR, $directory) or die $!;

while(my $files = readdir(DIR))
{
    next if ($files =~ m/^\./);

    push(@filenames, $files);
}


for(my $i = 0; $i< scalar @filenames; $i++){
    
    open(my $filehandle, '<', "./LTD/".$filenames[$i]) or die $!;
    $nr_in_file = 0;
    my $chars = 0;
    my $len  = length $filenames[$i];
    if(substr($filenames[$i], $len - 7, $len-1) eq "-Z.txt") 
        if(substr($filenames[$i], length $filenames[$i] - 7, length $filenames[$i]-1) eq "-X.txt")
        unlink "./LTD/".$filenames[$i];

    # while(my $row = <$filehandle>){
    #     chomp $row;
    #     $nr++;
    #     $nr_in_file++;
    #     if(substr($row, 0, 2) ne ".*"){
    #         $flag = "false";
    #     }
    # }
    # if($nr_in_file > $max && $flag eq "false"){
    #     $max = $nr_in_file;
    # }
    # if($nr_in_file < $min && $nr_in_file > 0 && $flag eq "false"){
    #     $min = $nr_in_file;
    # }
    # if($flag eq "true"){
    #     $nr++;
    #     print($filenames[$i] . "\n");
    #     unlink "./LTD/".$filenames[$i];
    # }
    # $flag = "true";

}
print("FINISHED");
# print($nr . "\n". "max is: ". $max. "\n". "min is: ". $min. "\n");
exit();


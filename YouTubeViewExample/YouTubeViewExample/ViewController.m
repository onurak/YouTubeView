//
//  ViewController.m
//  YouTubeViewExample
//
//  Created by Randy McMillan on 11/21/12.
//  Copyright (c) 2012 RandyMcMillan.net. All rights reserved.
//

#import "ViewController.h"
#import "YouTubeViewController.h"

@interface ViewController ()

@end

@implementation ViewController
@synthesize youtubeToDisplay;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)displayYouTube:(id)sender{


    YouTubeViewController *youtubeVC = [[YouTubeViewController alloc] init];
    youtubeVC.modalPresentationStyle = UIModalPresentationPageSheet;
        // youtubeVC.modalPresentationStyle = UIModalPresentationFullScreen;
    [self presentViewController:youtubeVC animated:YES completion:nil];
    [youtubeVC.webView setBackgroundColor:[UIColor clearColor]];

self.youtubeToDisplay = @"http://www.youtube.com/watch?v=C3vgukxs6dw&feature=fvwrel";
        // Create a URL object.
    NSURL *url = [NSURL URLWithString:youtubeToDisplay];
    NSLog(@"%@", url);
    
    NSURLRequest *requestObj = [NSURLRequest requestWithURL:[NSURL URLWithString:youtubeToDisplay] cachePolicy:NSURLRequestReturnCacheDataElseLoad timeoutInterval:6.0];

        // Load the request in the UIWebView.
    [youtubeVC.webView loadRequest:requestObj];
    self.youtubeButton.highlighted = FALSE;
    

};

#pragma mark -
#pragma mark View management

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    
	return YES;
}

- (void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration
{
}

- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation
{
}



- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

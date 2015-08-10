//
//  ViewController.h
//  BlocBrowser
//
//  Created by Nilesh Mahale on 8/9/15.
//  Copyright (c) 2015 Nilesh Mahale. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

/*
 Replaces the web view with a fresh one, erasing all history. Also update the URL field and toolbar appropriately.
 */

- (void) resetWebView;

@end


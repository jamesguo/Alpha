//
//  FLEXGlobalsTableViewController.h
//  Flipboard
//
//  Created by Ryan Olson on 2014-05-03.
//  Copyright (c) 2014 Flipboard. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FLEXGlobalsTableViewControllerDelegate;

@interface FLEXGlobalsTableViewController : UITableViewController

@property (nonatomic, weak) id <FLEXGlobalsTableViewControllerDelegate> delegate;

/*!
 *  Exposing global entries, since we will take a few of them out in certain cases
 *
 *  @return Array of FLEXGlobalsTableViewControllerEntry objects
 */
+ (NSArray *)defaultGlobalEntries;

@end

@protocol FLEXGlobalsTableViewControllerDelegate <NSObject>

- (void)globalsViewControllerDidFinish:(FLEXGlobalsTableViewController *)globalsViewController;

@end

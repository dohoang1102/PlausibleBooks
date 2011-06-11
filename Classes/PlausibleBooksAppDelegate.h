//
//  PlausibleBooksAppDelegate.h
//  PlausibleBooks
//
//  Created by Mahipal Raythattha on 6/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlausibleBooksAppDelegate : NSObject <UIApplicationDelegate>
{
    UIWindow *window;
    UINavigationController *nvc;
}

@property (nonatomic, retain) UIWindow *window;

- (NSString *) createEditableCopyOfDatabaseIfNeededAndReturnPath;

@end


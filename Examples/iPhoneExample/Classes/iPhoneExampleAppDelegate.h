//
//  iPhoneExampleAppDelegate.h
//  iPhoneExample
//
//  Created by Erik Doernenburg on 20/07/10.
//  Copyright Mulle Kybernetik 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iPhoneExampleAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end


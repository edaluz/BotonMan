//
//  AppDelegate.h
//  BotonMan
//
//  Created by Emiliano Da Luz on 5/9/17.
//  Copyright © 2017 Emiliano Da Luz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


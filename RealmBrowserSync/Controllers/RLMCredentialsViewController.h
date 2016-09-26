//
//  RLMCredentialsViewController.h
//  RealmBrowser
//
//  Created by Dmitry Obukhov on 31/08/16.
//  Copyright © 2016 Realm inc. All rights reserved.
//

@import Cocoa;
@import Realm;

@interface RLMCredentialsViewController : NSViewController

@property (nonatomic, strong) RLMSyncCredential *credential;

@end

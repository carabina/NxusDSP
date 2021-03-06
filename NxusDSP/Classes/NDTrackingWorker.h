//
//  TrackingWorker.h
//  NxusDSP
//
//  Copyright © 2016 TechMpire ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NDDeviceInformation.h"
#import "SafariServices/SFSafariViewController.h"

@interface NDTrackingWorker : NSObject

@property (nonatomic, assign) BOOL operationScheduled;
@property (nonatomic, assign) BOOL operationRunning;

+(void) trackLaunch;
+(void) track:(NSString *) event params:(NSMutableDictionary *) params;

@end

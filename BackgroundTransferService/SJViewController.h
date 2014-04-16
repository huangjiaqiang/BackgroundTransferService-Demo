//
//  SJViewController.h
//  BackgroundTransferService
//
//  Created by  imac_hjq on 14-4-16.
//  Copyright (c) 2014年  mac. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString *DownloadURLString = @"https://developer.apple.com/library/ios/documentation/Cocoa/Reference/Foundation/ObjC_classic/FoundationObjC.pdf";

@interface SJViewController : UIViewController< NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate,UIDocumentInteractionControllerDelegate>

@property (weak, nonatomic) IBOutlet UIProgressView *progressView;

- (IBAction)start:(id)sender;

@property (nonatomic) NSURLSession *session;
@property (nonatomic) NSURLSessionDownloadTask *downloadTask;
@property (strong, nonatomic) UIDocumentInteractionController *documentInteractionController;

@end

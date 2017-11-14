//
//  RulerView.h
//  macSVG
//
//  Created by Douglas Ward on 11/12/17.
//  Copyright © 2017 ArkPhone, LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@class SVGWebView;

@interface RulerView : NSView <WebUIDelegate, WebPolicyDelegate, WebEditingDelegate, WebFrameLoadDelegate, WebResourceLoadDelegate, WebDownloadDelegate>

@property (weak) IBOutlet WebView * rulerWebView;
@property (weak) IBOutlet SVGWebView * svgWebView;

@property (strong) NSString * rulerUnit;

@property (assign) NSInteger majorMarkInterval;
@property (assign) CGFloat majorMarkOffset;
@property (assign) CGFloat majorMarkLength;
@property (assign) CGFloat majorMarkWidth;

@property (assign) NSInteger minorMarkInterval;
@property (assign) CGFloat minorMarkOffset;
@property (assign) CGFloat minorMarkLength;
@property (assign) CGFloat minorMarkWidth;

@property (assign) CGFloat fontSize;

- (void)createRulerWebView;

@end

//
//  ImageElementEditorWebView.h
//  ImageElementEditor
//
//  Created by Douglas Ward on 5/5/18.
//  Copyright © 2018 ArkPhone LLC. All rights reserved.
//

#import <WebKit/WebKit.h>

@class ImageElementEditor;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@interface ImageElementEditorWebView : WebView

@property (weak) IBOutlet ImageElementEditor * imageElementEditor;

@end

#pragma clang diagnostic pop

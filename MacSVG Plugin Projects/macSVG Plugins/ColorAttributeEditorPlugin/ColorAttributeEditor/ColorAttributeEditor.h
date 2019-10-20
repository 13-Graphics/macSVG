//
//  ColorAttributeEditor.h
//  ColorAttributeEditor
//
//  Created by Douglas Ward on 1/5/12.
//  Copyright © 2016 ArkPhone LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MacSVGPlugin/MacSVGPlugin.h"

@class GradientEditorPopoverViewController;
@class WebColorsTableViewController;

@interface ColorAttributeEditor : MacSVGPlugin
{
}
@property(strong) IBOutlet WebColorsTableViewController * webColorsTableViewController;
@property(weak) IBOutlet NSColorWell * colorWell;
@property(weak) IBOutlet NSTextField * colorTextField;
@property(weak) IBOutlet NSPopover * gradientEditorPopover;
@property(weak) IBOutlet GradientEditorPopoverViewController * gradientEditorPopoverViewController;
@property(weak) IBOutlet NSButton * setGradientButton;
@property(weak) IBOutlet NSButton * setNoneButton;


- (IBAction)setColorButtonAction:(id)sender;
- (IBAction)setNoneButtonAction:(id)sender;
- (IBAction)setWebColorButtonAction:(id)sender;
- (IBAction)colorWellAction:(id)sender;
- (IBAction)colorGradientButtonAction:(id)sender;

- (void)setGradientElement:(NSXMLElement *)gradientElement;

@end


//
//  DetailViewController.h
//  opencvmaster
//
//  Created by Vivek Nair on 2/15/15.
//  Copyright (c) 2015 Vivek Nair. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

